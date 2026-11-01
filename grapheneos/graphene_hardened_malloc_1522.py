"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1522."""

def spec_graphene_hardened_malloc_1522() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1522, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1522():
    s = spec_graphene_hardened_malloc_1522()
    assert s["spec_id"] == 1522
