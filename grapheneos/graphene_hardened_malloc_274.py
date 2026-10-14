"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 274."""

def spec_graphene_hardened_malloc_274() -> dict:
    return {"system": "GrapheneOS", "spec_id": 274, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_274():
    s = spec_graphene_hardened_malloc_274()
    assert s["spec_id"] == 274
