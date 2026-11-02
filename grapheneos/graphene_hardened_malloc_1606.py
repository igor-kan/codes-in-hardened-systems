"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1606."""

def spec_graphene_hardened_malloc_1606() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1606, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1606():
    s = spec_graphene_hardened_malloc_1606()
    assert s["spec_id"] == 1606
