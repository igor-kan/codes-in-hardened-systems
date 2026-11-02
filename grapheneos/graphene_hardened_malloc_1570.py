"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1570."""

def spec_graphene_hardened_malloc_1570() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1570, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1570():
    s = spec_graphene_hardened_malloc_1570()
    assert s["spec_id"] == 1570
